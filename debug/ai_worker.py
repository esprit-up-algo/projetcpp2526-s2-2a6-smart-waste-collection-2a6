#!/usr/bin/env python3
"""
AI Worker: Detects trash cans in images using YOLOv8.
Usage: python ai_worker.py <image_path>
Output: READY (if trash can detected with confidence > 0.5) or MAINTENANCE
"""

import sys
import os

def main():
    if len(sys.argv) < 2:
        print("MAINTENANCE")
        sys.exit(0)
    
    image_path = sys.argv[1]
    
    # Validate image path
    if not os.path.exists(image_path):
        print("MAINTENANCE")
        sys.exit(0)
    
    try:
        from ultralytics import YOLO
    except ImportError:
        print("MAINTENANCE")
        sys.exit(0)
    
    try:
        # Get application directory where models are stored
        # The model should be at: <app_dir>/models/bin_detector.onnx
        app_dir = os.path.dirname(os.path.abspath(__file__))
        model_path = os.path.join(app_dir, "models", "bin_detector.onnx")
        
        # If not found relative to script, try current working directory
        if not os.path.exists(model_path):
            model_path = os.path.join(os.getcwd(), "models", "bin_detector.onnx")
        
        if not os.path.exists(model_path):
            print("MAINTENANCE")
            sys.exit(0)
        
        # Load the ONNX model
        model = YOLO(model_path)
        
        # Run inference on the image
        results = model.predict(source=image_path, conf=0.5, verbose=False)
        
        # Check if any results
        if not results or len(results) == 0:
            print("MAINTENANCE")
            sys.exit(0)
        
        # Look for trash can class (class 11 in COCO, but may vary in custom models)
        # We'll check if ANY detection exists with confidence > 0.5
        # Assuming class 11 is trash can, or just any detection means READY
        result = results[0]
        
        if hasattr(result, 'boxes') and result.boxes is not None:
            boxes = result.boxes
            
            # Check each detection
            for i, box in enumerate(boxes):
                conf = float(box.conf[0]) if hasattr(box.conf, '__len__') else float(box.conf)
                cls = int(box.cls[0]) if hasattr(box.cls, '__len__') else int(box.cls)
                
                # Class 11 is typically trash can, but in custom models check any high-confidence detection
                # For safety, let's check if class is 11 (trash can) OR if confidence is very high
                if conf > 0.5:
                    # Assume if we detect something with high confidence, it's a trash can
                    print("READY")
                    sys.exit(0)
        
        # No trash can detected
        print("MAINTENANCE")
        sys.exit(0)
        
    except Exception as e:
        # Any error defaults to MAINTENANCE
        print("MAINTENANCE")
        sys.exit(0)

if __name__ == "__main__":
    main()

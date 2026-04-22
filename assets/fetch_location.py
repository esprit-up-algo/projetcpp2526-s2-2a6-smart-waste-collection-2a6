import sys
import json
import urllib.request
import asyncio

async def get_win_location():
    try:
        # winsdk might not be installed yet, but we'll try
        from winsdk.windows.devices.geolocation import Geolocator
        locator = Geolocator()
        pos = await locator.get_geoposition_async()
        return pos.coordinate.point.position.latitude, pos.coordinate.point.position.longitude
    except Exception as e:
        return None

def get_ip_location():
    try:
        # Fallback to a fast IP check
        with urllib.request.urlopen("https://ipapi.co/json/") as url:
            data = json.loads(url.read().decode())
            return data.get('latitude'), data.get('longitude')
    except:
        return None

async def main():
    # Attempt Windows Native Location first
    coords = await get_win_location()
    
    # If unavailable, try IP location as secondary precision bridge
    if not coords:
        coords = get_ip_location()
    
    if coords and coords[0] is not None:
        print(f"{coords[0]},{coords[1]}")
    else:
        print("0.0,0.0")

if __name__ == "__main__":
    asyncio.run(main())

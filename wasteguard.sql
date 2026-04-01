-- ============================================================
--  WasteGuard - Script SQL Oracle complet
--  A copier-coller dans SQL Developer et executer
--  Compatible Oracle 11g+
-- ============================================================
-- ============================================================
-- 1. TABLE CLIENT (avec DATE_EXPIRATION_CONTRAT)
-- ============================================================
CREATE TABLE CLIENT (
    ID_CLIENT                   NUMBER(10)    PRIMARY KEY,
    NOM                         VARCHAR2(100) NOT NULL,
    MATRICULE                   VARCHAR2(50)  UNIQUE NOT NULL,
    EMAIL                       VARCHAR2(150),
    TYPE_CONTRAT                VARCHAR2(50),
    STATUT_PAIEMENT             VARCHAR2(30),
    DATE_EXPIRATION_CONTRAT     DATE
);

-- ============================================================
-- 2. TABLE EMPLOYE
-- ============================================================
CREATE TABLE EMPLOYE (
    ID_EMP              NUMBER(10)    PRIMARY KEY,
    MATRICULE           VARCHAR2(50)  UNIQUE NOT NULL,
    CIN                 VARCHAR2(20),
    NOM                 VARCHAR2(100) NOT NULL,
    EMAIL               VARCHAR2(150),
    SPECIALITE          VARCHAR2(100),
    DISPONIBILITE       VARCHAR2(30),
    PHOTO               BLOB,
    FACE_TEMPLATE       CLOB,
    FACE_TEMPLATE_UPDATED_AT DATE,
    FACE_ENABLED        NUMBER(1)     DEFAULT 1
);

-- ============================================================
-- 3. TABLE FOURNISSEUR
-- ============================================================
CREATE TABLE FOURNISSEUR (
    ID_FOUR     NUMBER(10)    PRIMARY KEY,
    NOM         VARCHAR2(150) NOT NULL,
    EMAIL       VARCHAR2(150),
    TELEPHONE   VARCHAR2(30)
);

-- ============================================================
-- 4. TABLE BAC_INTEL  (utilisee par le module Produit)
-- ============================================================
CREATE TABLE BAC_INTEL (
    ID_BAC              NUMBER(10)     PRIMARY KEY,
    NUM_SERIE           VARCHAR2(100)  UNIQUE,
    MODELE              VARCHAR2(150),
    REMPLISSAGE         NUMBER(10,2)   DEFAULT 0,
    LOCALISATION_STOCK  VARCHAR2(200),
    ID_COMMANDE         NUMBER(10),
    PRIX                NUMBER(12,2)   DEFAULT 0,
    STOCK               NUMBER(10)     DEFAULT 0,
    CAPACITE_BATTERIE   NUMBER(10)     DEFAULT 10000,
    IMAGE_PATH          VARCHAR2(500),
    CARACTERISTIQUES    CLOB
);

-- ============================================================
-- 5. TABLE MATIERE_PREMIERE  (module Stock)
-- ============================================================
CREATE TABLE MATIERE_PREMIERE (
    ID_MP               NUMBER(10)    PRIMARY KEY,
    REFERENCE           VARCHAR2(100) UNIQUE NOT NULL,
    NOM                 VARCHAR2(150) NOT NULL,
    QUANTITE            NUMBER(10)    DEFAULT 0,
    PRIX                NUMBER(12,2)  DEFAULT 0,
    SEUIL_CRITIQUE      NUMBER(10)    DEFAULT 5,
    DATE_FABRICATION    DATE,
    DATE_ACHAT          DATE,
    NUM_FOUR            NUMBER(10),
    NOM_FOUR            VARCHAR2(150),
    CONSTRAINT FK_MP_FOUR FOREIGN KEY (NUM_FOUR)
        REFERENCES FOURNISSEUR(ID_FOUR) ON DELETE SET NULL
);

-- ============================================================
-- 6. TABLE COMMANDE
-- ============================================================
CREATE TABLE COMMANDE (
    ID_COMMANDE     NUMBER(10)    PRIMARY KEY,
    ID_CLIENT       NUMBER(10),
    QTE             NUMBER(10)    DEFAULT 1,
    PRIORITE        VARCHAR2(30),
    STATUT          VARCHAR2(50),
    DATE_COMMANDE   DATE,
    DATE_LIVRAISON  DATE,
    PRIX_TOTAL      NUMBER(12,2)  DEFAULT 0,
    ADRESSE         VARCHAR2(300),
    CONSTRAINT FK_CMD_CLIENT FOREIGN KEY (ID_CLIENT)
        REFERENCES CLIENT(ID_CLIENT) ON DELETE SET NULL
);

-- ============================================================
-- 7. TABLE INTERVENTION
-- ============================================================
CREATE TABLE INTERVENTION (
    ID_INTER    NUMBER(10)    PRIMARY KEY,
    DATE_INTER  DATE,
    REFERENCE   VARCHAR2(100) UNIQUE NOT NULL,
    DUREE       NUMBER(10,2)  DEFAULT 0,
    COUT        NUMBER(12,2)  DEFAULT 0,
    STATUT      VARCHAR2(50),
    TYPE        VARCHAR2(50),
    PRIORITE    VARCHAR2(30),
    ID_BAC      NUMBER(10),
    CONSTRAINT FK_INTER_BAC FOREIGN KEY (ID_BAC)
        REFERENCES BAC_INTEL(ID_BAC) ON DELETE SET NULL
);

-- ============================================================
-- 8. TABLE EFFECTUATION  (lien EMPLOYE <-> INTERVENTION)
-- ============================================================
CREATE TABLE EFFECTUATION (
    ID_EMP      NUMBER(10) NOT NULL,
    ID_INTER    NUMBER(10) NOT NULL,
    PRIMARY KEY (ID_EMP, ID_INTER),
    CONSTRAINT FK_EFF_EMP   FOREIGN KEY (ID_EMP)   REFERENCES EMPLOYE(ID_EMP)      ON DELETE CASCADE,
    CONSTRAINT FK_EFF_INTER FOREIGN KEY (ID_INTER) REFERENCES INTERVENTION(ID_INTER) ON DELETE CASCADE
);

-- ============================================================
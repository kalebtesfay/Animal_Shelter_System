DROP TABLE IF EXISTS CLIENT;
DROP TABLE IF EXISTS STAFF;
DROP TABLE IF EXISTS ANIMALS;

--CREATE TABLE
--=====================
CREATE TABLE CLIENT (
    id INT,
    name TEXT NOT NULL,
    address TEXT NOT NULL,
    PRIMARY KEY(id)
    );

CREATE TABLE STAFF (
    id INT,
    name TEXT NOT NULL,
    PRIMARY KEY(id)
    );

CREATE TABLE ANIMALS (
    id INT,
    name TEXT NOT NULL,
    type TEXT NOT NULL,
    sex TEXT NOT NULL,
    age INT,
    height TEXT NOT NULL,
    colour TEXT NOT NULL,
    breed TEXT NOT NULL,
    neutered TEXT NOT NULL,
    condition TEXT NOT NULL,
    PRIMARY KEY (id)
    );

--INSERT DATA
--================

begin transaction;

-- CLIENT
--========================================================================================
insert into CLIENT(id, name, address)
    values(1,"Wilfred James","3670 Glory Road");
insert into CLIENT(id, name, address)
    values(2,"Mona Lane","2257 Berry Street");
insert into CLIENT(id, name, address)
    values(3,"Steve Blake","3441 Cemetery Street");
insert into CLIENT(id, name, address)
    values(4,"Josh Rich","2795 Green Hill Road");
insert into CLIENT(id, name, address)
    values(5,"Marlee Sparks","4162 Adams Drive");

--STAFF
--==========================================================
insert into STAFF(id, name)
    values(000,"Kaleb Tesfay");
insert into STAFF(id, name)
    values(001,"Adam Farah");
insert into STAFF(id, name)
    values(002,"Japinder Sandhu");
insert into STAFF(id, name)
    values(003,"Lauryn Esparza");
insert into STAFF(id, name)
    values(004,"Jaiden Kelly");

--ANIMALS
--===========================================
insert into ANIMALS(id, name, type, sex, age, height, colour, breed, neutered, condition)
    values(1, "Rex", "Dog", "Male", 2, "50cm", "Black", "Pitbull", "No", "Healthy");
insert into ANIMALS(id, name, type, sex, age, height, colour, breed, neutered, condition)
    values(2, "Daisy", "Dog", "Female", 1, "30cm", "Orange", "Boxer", "Yes", "Healthy");
insert into ANIMALS(id, name, type, sex, age, height, colour, breed, neutered, condition)
    values(3, "Coco", "Cat", "Female", 6, "20cm", "Brown", "Persian", "Yes", "Not Healthy");
insert into ANIMALS(id, name, type, sex, age, height, colour, breed, neutered, condition)
    values(4, "Jack", "Cat", "Male", 5, "10cm", "White", "Ragdoll", "Yes", "Healthy");
insert into ANIMALS(id, name, type, sex, age, height, colour, breed, neutered, condition)
    values(5, "Gus", "Hamster", "Male", 1, "6cm", "Brown", "Chinese", "Yes", "Healthy");




end transaction;

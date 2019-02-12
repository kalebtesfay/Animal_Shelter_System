# cuACS (D1)
# 4our People

@authors
<br/>Kaleb Tesfay    | 101048170
<br/>Adam Farah      | 100966918
<br/>Japinder Sandhu | 101021899

Professor. Christine Laurendeau

************************
<center>A message from author's:</center>
	Coded with :heart:,	  
************************

Purpose of Deliverable:<br/>
	- The purpose of this Deliverable is to implement the following features:
    <br/>- Staff<br/>
      <br/>- View Animals
        - Allows the Staff to view all the animals in the Database.
      - Add Animal
        - Allows the Staff to add animals to the Database.

List of Source/Header/Data File:
	- This folder contains 22 files (not counting the README) and 1 Folder
		- Task: Programming Implementations
      - 1 Folder
        - database
          - database.db
            - Database file for the project.
			- 1 .pro file.
        - qt_cuacs_UI.pro
          - QT implemented file that is in charge of setting up startup options.
      - 1 .pro.user file.
        - qt_cuacs_UI.pro.user
          - QT implemented file.
      - 1 .ui file.
        - mainwindow.ui
          - In charge of Client-side/Front-end.
      - 1 .ui.autosave file.
        - mainwindow.ui.autosave
          - QT implemented file which is a back-up.
			- 9 .cc files.
				- Animal.cpp
					- Getter and Setter Methods for Animal objects.
        - Control.cpp
					- Implemented this class to create the Database file.
        - login.cpp
					- Connects the Database to the application.
        - Shelter.cpp
					-  Bridges the program so it can store added animals.
				- View.cpp
					- Prints the stored animals for debugging reasons.
        - main.cpp
  				- main() class for the program.
  			- mainwindow.cpp
  				- In charge of Server-side/Back-end calling so buttons can operate with other classes.
			- 6 .h files.
        - Animal.h
          - Header file for Animal class.
        - AnimalList.h
          - Template class for storing Animals in a Linked List.
        - Control.h
          - Header file for Control class.
        - login.h
          - Header file for login class.
        - Shelter.h
          - Header file for Shelter class.
        - View.h
          - Header file for View class.
        - mainwindow.h
          - Header file for for mainwindow class.
			- 1 makefile
				- Makefile
					- Typing make in cmd line...
						- This compiles all the programs at once.
							- Compiles all the programs and creates their appropriate object files.
							- Combines all object files to one.
								- Creates qt_cuacs_UI object file.

Compilation Cmd:
	- To compile, you'll need to access the respected directory all the files are located in via Terminal.
    - Make sure the folder is in the Downloads Section of your local Linux Operating System.
  		- Once you are in the respected directory, you'll need to do the following.
        - untar the file
          - tar -xvf filename.tar
  			- Run make
          - make
  		  - Once you ran make, it'll create an updated version of all the object files.
  			- It'll create a big object file called qt_cuacs_UI, which is all the program's object files
  			into one.
          - Run ..
            - ./qt_cuacs_UI


Lanching and Operating Instructions:
	- Once the code is ran...
		- A UI representation of our application will pop up.
      - There will be two options the user will be able to do.
        - Click Client
          - Directs the user to the Client Page which only has a Back button.
            - For the purpose of this Deliverable, the Client Page will do nothing.
        - Click Staff
          - Directs the user to a Page that has a View Animals and Add Animal button.
            - Click View Animals
              - Directs user to a page that showcases everything that is in the database.
                - Click Back
                  - Directs user back to Staff page.
                - Click Homepage
                  - Directs user back to Homepage.
            - Click Add Animal
              - Directs user a page where the user can add animals to the database.
                - Click Save
                  - Adds the animal inputted to the database.
                - Click Back
                  - Directs user back to Staff page.
                - Click Homepage
                  - Directs user back to Homepage.

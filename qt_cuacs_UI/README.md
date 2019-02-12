# cuACS (D1)
# 4our People

@authors
<br/>Kaleb Tesfay    | 101048170
<br/>Adam Farah      | 100966918
<br/>Japinder Sandhu | 101021899

Professor. Christine Laurendeau

************************
A message from author's:<br/>
	Coded with :heart:,	  
************************

Purpose of Deliverable:<br/>
	&nbsp;&nbsp;- The purpose of this Deliverable is to implement the following features:
    &nbsp;&nbsp;&nbsp;&nbsp;- Staff<br/>
      &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- View Animals<br/>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Allows the Staff to view all the animals in the Database.<br/>
      &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Add Animal<br/>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Allows the Staff to add animals to the Database.<br/>

List of Source/Header/Data File:<br/>
	- This folder contains 22 files (not counting the README) and 1 Folder<br/>
		- Task: Programming Implementations<br/>
      - 1 Folder<br/>
        - database<br/>
          - database.db<br/>
            - Database file for the project.<br/>
			- 1 .pro file.<br/>
        - qt_cuacs_UI.pro<br/>
          - QT implemented file that is in charge of setting up startup options.<br/>
      - 1 .pro.user file.<br/>
        - qt_cuacs_UI.pro.user<br/>
          - QT implemented file.<br/>
      - 1 .ui file.<br/>
        - mainwindow.ui<br/>
          - In charge of Client-side/Front-end.<br/>
      - 1 .ui.autosave file.<br/>
        - mainwindow.ui.autosave<br/>
          - QT implemented file which is a back-up.<br/>
			- 7 .cpp files.<br/>
				- Animal.cpp<br/>
					- Getter and Setter Methods for Animal objects.<br/>
        - Control.cpp<br/>
					- Implemented this class to create the Database file.<br/>
        - login.cpp<br/>
					- Connects the Database to the application.<br/>
        - Shelter.cpp<br/>
					-  Bridges the program so it can store added animals.<br/>
				- View.cpp<br/>
					- Prints the stored animals for debugging reasons.<br/>
        - main.cpp<br/>
  				- main() class for the program.<br/>
  			- mainwindow.cpp<br/>
  				- In charge of Server-side/Back-end calling so buttons can operate with other classes.<br/>
			- 6 .h files.<br/>
        - Animal.h<br/>
          - Header file for Animal class.<br/>
        - AnimalList.h<br/>
          - Template class for storing Animals in a Linked List.<br/>
        - Control.h<br/>
          - Header file for Control class.<br/>
        - login.h<br/>
          - Header file for login class.<br/>
        - Shelter.h<br/>
          - Header file for Shelter class.<br/>
        - View.h<br/>
          - Header file for View class.<br/>
        - mainwindow.h<br/>
          - Header file for for mainwindow class.<br/>
			- 1 makefile<br/>
				- Makefile<br/>
					- Typing make in cmd line...<br/>
						- This compiles all the programs at once.<br/>
							- Compiles all the programs and creates their appropriate object files.<br/>
							- Combines all object files to one.<br/>
								- Creates qt_cuacs_UI object file.<br/>

Compilation Cmd:<br/>
	- To compile, you'll need to access the respected directory all the files are located in via Terminal.<br/>
    - Make sure the folder is in the Downloads Section of your local Linux Operating System.<br/>
  		- Once you are in the respected directory, you'll need to do the following.<br/>
        - untar the file<br/>
          - tar -xvf filename.tar<br/>
  			- Run make<br/>
          - make<br/>
  		  - Once you ran make, it'll create an updated version of all the object files.<br/>
  			- It'll create a big object file called qt_cuacs_UI, which is all the program's object files
  			into one.<br/>
          - Run...<br/>
            - ./qt_cuacs_UI<br/>


Lanching and Operating Instructions:<br/>
	- Once the code is ran...<br/>
		- A UI representation of our application will pop up.<br/>
      - There will be two options the user will be able to do.<br/>
        - Click Client<br/>
          - Directs the user to the Client Page which only has a Back button.<br/>
            - For the purpose of this Deliverable, the Client Page will do nothing.<br/>
        - Click Staff<br/>
          - Directs the user to a Page that has a View Animals and Add Animal button.<br/>
            - Click View Animals<br/>
              - Directs user to a page that showcases everything that is in the database.<br/>
                - Click Back<br/>
                  - Directs user back to Staff page.<br/>
                - Click Homepage<br/>
                  - Directs user back to Homepage.<br/>
            - Click Add Animal<br/>
              - Directs user a page where the user can add animals to the database.<br/>
                - Click Save<br/>
                  - Adds the animal inputted to the database.<br/>
                - Click Back<br/>
                  - Directs user back to Staff page.<br/>
                - Click Homepage<br/>
                  - Directs user back to Homepage.<br/>

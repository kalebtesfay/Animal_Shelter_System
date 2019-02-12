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
	&nbsp;&nbsp;- The purpose of this Deliverable is to implement the following features:<br/>
    &nbsp;&nbsp;&nbsp;&nbsp;- Staff<br/>
      &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- View Animals<br/>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Allows the Staff to view all the animals in the Database.<br/>
      &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Add Animal<br/>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Allows the Staff to add animals to the Database.<br/>

List of Source/Header/Data File:<br/>
	&nbsp;&nbsp;- This folder contains 22 files (not counting the README) and 1 Folder<br/>
		&nbsp;&nbsp;&nbsp;&nbsp;- Task: Programming Implementations<br/>
      &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- 1 Folder<br/>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- database<br/>
          &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- database.db<br/>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Database file for the project.<br/>
			&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- 1 .pro file.<br/>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- qt_cuacs_UI.pro<br/>
          &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- QT implemented file that is in charge of setting up startup options.<br/>
      &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- 1 .pro.user file.<br/>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- qt_cuacs_UI.pro.user<br/>
          &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- QT implemented file.<br/>
      &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- 1 .ui file.<br/>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- mainwindow.ui<br/>
          &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- In charge of Client-side/Front-end.<br/>
      &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- 1 .ui.autosave file.<br/>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- mainwindow.ui.autosave<br/>
          &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- QT implemented file which is a back-up.<br/>
			&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- 7 .cpp files.<br/>
				&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Animal.cpp<br/>
					&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Getter and Setter Methods for Animal objects.<br/>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Control.cpp<br/>
					&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Implemented this class to create the Database file.<br/>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- login.cpp<br/>
					&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Connects the Database to the application.<br/>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Shelter.cpp<br/>
					&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;-  Bridges the program so it can store added animals.<br/>
				&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- View.cpp<br/>
					&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Prints the stored animals for debugging reasons.<br/>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- main.cpp<br/>
  				&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- main() class for the program.<br/>
  			&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- mainwindow.cpp<br/>
  				&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- In charge of Server-side/Back-end calling so buttons can operate with other classes.<br/>
			&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- 6 .h files.<br/>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Animal.h<br/>
          &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Header file for Animal class.<br/>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- AnimalList.h<br/>
          &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Template class for storing Animals in a Linked List.<br/>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Control.h<br/>
          &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Header file for Control class.<br/>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- login.h<br/>
          &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Header file for login class.<br/>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Shelter.h<br/>
          &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Header file for Shelter class.<br/>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- View.h<br/>
          &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Header file for View class.<br/>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- mainwindow.h<br/>
          &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Header file for for mainwindow class.<br/>
			&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- 1 makefile<br/>
				&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Makefile<br/>
					&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Typing make in cmd line...<br/>
						&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- This compiles all the programs at once.<br/>
							&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Compiles all the programs and creates their appropriate object files.<br/>
							&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Combines all object files to one.<br/>
								&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Creates qt_cuacs_UI object file.<br/>

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

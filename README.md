# QT-Custom-CMake-Wizards
 
Custom wizards for Qt Creator using CMake as the build system. 
* Custom Project Wizard based on CMake
* Custom class wizard

## Custom Qt Creator Project Wizard

This project enables you to create a project utilising CMake, with separate declaration and definition folders. 
There are no other build options available in this model.
You can declare the identifers for the folders. The default setting for these folders are inc and src.
It also includes a precompiled header file, in a separate folder and a config file, again in a separate folder.
You can set the C++ standard you wish from one of four (4) options: C++1, C++14, C++17 and C++20.
If no standard is set the project will default to C++17. 

You also get to choose the license you wish to use for your project. The available optins are:
* GPL V2,
* GPL V3,
* LGPL V2,
* LGPL V3,
* MIT,
* APACHE 2,
* Own License,
* None.

If you wish to use your license, place a text copy in the wizard_license folder of the wizard directory. 
You can alter the option by changing the text in the wizard json file to reflect your custom license. 
Just change the option "Own License" with a simple descriptor of your choosing.

You can also set the applicatino entry and exit points. 
The options available are:
* int main(),
* int main(int argc, char* argv[],
* auto main() -> int,
* auto main int argc, char* argv[]) -> int

The available exit points are:
* return 0,
* turn EXIT_SUCCESS

There are two CMakeLists.txt files. A top level CMakeLists.txt which sets the project name, C++ standard, application (project) version - set to 0.0.1.0
and a project level CMakeLists.txt which sets the include files, configures the config file and creates the executable. This is a a very simple CMakeLists.txt file. 
It is not meant for the sophisticated C++ projects you can find here on GitHub and other places, but is mainly meant for simple quick and easy projects.  

## Qt Creator Class Wizard
This project creates a class for inclusion in your Qt Creator CMake C++ custom project, as outlined above. 
It creates a declaration file and a definition file. It will place these in the correct folders, and enable you to copy the text you require to include the files in the 
project source level CMakeLists.txt. Literally highlight, copy and paste actions in the normal way.
If your project utilises a precompiled header file, make sure to tick the approriate box and point to the precompiled header folder, no need to point to the file. 

If you check the "New Directory" box, this suggests a new directory based on the namespace you wish to use, converting the namespace to lowercase. You are, of course, 
free to choose your own directory identifier. Just delete the suggested identfier and write in your own.

You are asked to point to the decalaration and definition directories, separately. 
The wizard cannot determine where these directories are or what identifiers you are using.

The wizard does not check for name clashes or correctness, other than the normal no numeric values at the beginning of the class name and allows only for underscores (something you should really avoid). 

## Placement

These two wizards should be placed in the approrpriate locations for Qt Creator wizards. You can find the relevant places on the Qt Creator website (https://doc.qt.io/qtcreator/creator-project-wizards.html) 
The relevant directories are listed, on the web page as being (as of January 2022): 
* Windows: share\qtcreator\templates\wizards
* Linux: share/qtcreator/templates/wizards
* macOS: Qt Creator.app/Contents/Resources/templates/wizards
** Local user's settings directory:
* Windows: %APPDATA%\QtProject\qtcreator\templates\wizards
* Linux and macOS: $HOME/.config/QtProject/qtcreator/templates/wizards

You may need to create a separate folder (with the identifier cmakecpp) in the relevant directory:

** project/cmakecpp  
** class/cmakecpp

You may need to restart Qt Creator. 
If either is not picked up by Qt Creator, try starting Qt Creator from the commandline, using qtcreator -customwizard-verbose as the command.
If this fails, please ensure that the wizards are placed correctly in the relevant directories. The project wizard and associated files and folders goes in the project directory; the class wizard goes in the classes directory.

## License
These two custom Qt Creator wizards are submitted using the LGPL v3 license.  Using them makes an assumption that you accept the license. If you wish to read the common precise of the LGPL v3 license, click the Read License checkbox on the front page of the wizard. 
If you do not wish to accept the license, delete the wizards from the relevant folder. 
There is, literally, no guarantee of merchantability and fitness for a particular purpose; there is also, no guarantee with these wizards. 
They have been tested using Qt Creator on Windows 10 and 11 and on Ubuntu 21.04 and OpenSuse Tumbleweed (as of January 2022). They have, currently, not been tested or used on any Apple Mac computer. 

## Updates
I will, of course, try to update the wizards in as timely manner as I can. I will not guarantee, nor accept demands for, immediate or fast turn arounds. 
If you wish for a fast turn around, you should implement the changes yourself. This way you can guarantee that what you have is what you want or need. 
Just copy the wizard and approariate files and folders to a new folder, in the correct directory. Change the sections:

*     "supportedProjectTypes": [ ],  
*     "id": "AG.Class",  
*     "category": "AG.C++",  
*     "trDescription": "Creates a C++ declaration and definition files for a new class that you can add to a C++ project.",  
*     "trDisplayName": "Basic C++ Class",  
*     "trDisplayCategory": "Basic C/C++",  
 
 at the start of the wizard and have at it! :D 
 
 ## Notes 
 I've just discovered I made a mistake wih naming the custom project - it is set to project. Not a terribly good name, you will more than likely find it useful to change the name of the project folder (directory) to something more understandable. 
Sorry for this rather simple and basic error. :( 

(The start of each wizard is basically the same, so just change what you need and enoy yourself with whatever changes you want to make)



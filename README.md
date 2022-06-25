# QT-Custom-CMake-Wizards
 
### There were some serious deficiencies in the previous versions. 
### These have been addressed and the wizards should now work on all platforms.

### Changes made to the way the final code is presented - writing and  
### compiling the code should be much easier
 
Custom wizards for Qt Creator using CMake as the build system. 
* Custom Project Wizards based on CMake
  + A straightforward, plain console project  
  + A console project utilising the GoogleTest test framework  
* Custom class wizards  
  + A class usable with the plain console project  
  + A class usable with the GoogleTest console project  

## Custom Qt Creator Project Wizard

This project enables you to create a project utilising CMake, with separate declaration and definition folders. 
There are no other build options available in this model.
You can declare the identifers for the folders. The default setting for these folders are inc and src.
It also includes a precompiled header file, in a separate folder and a config file, again in a separate folder.
You can set the C++ standard you wish from one of four (4) options: 
* C++11,  
* C++14, 
* C++17  
* C++20  
If no standard is set the project will default to C++17. 

You also get to choose the license you wish to use for your project. The available options are:
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

You can also set the application entry and exit points. 
The options available are:
* int main(),
* int main(int argc, char* argv[],
* auto main() -> int,
* auto main int argc, char* argv[]) -> int

The available exit points are:
* return 0,
* turn EXIT_SUCCESS

There are two CMakeLists.txt files. A top level CMakeLists.txt which sets the project name, C++ standard, application (project) version - set to 0.1.0.0
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
* Windows: 
   +     share\qtcreator\templates\wizards
* Linux: 
   +     share/qtcreator/templates/wizards
* macOS: 
*     Qt Creator.app/Contents/Resources/templates/wizards
Local user's settings directory:
*  Windows: 
   +      %APPDATA%\QtProject\qtcreator\templates\wizards  
 _The Windows location is: **C:\Users\%UserName%\AppData\Roaming\QtProject\qtcreator\templates\wizards\[classes][projects]**  
 %UserName% is your username that you log into and use Windows as... 
if you are unsure, look in the File Explorer for your login name (there's a directory/folder, under Users with your username).  
Failing that open a command prompt and type in echo %UserName% and your username will be displayed._  
*Linux/Mac
   +     ~/.config/QtProject/qtcreator/templates/wizards
 
 You may find that Qt Creator doesn't pick up the new custom wizards, easily or at all. In which case just move them to:  

*     C:\Qt\Tools\QtCreator\share\qtcreator\templates\wizards\\[classes][projects]  
_Assuming that you followed the default installation recommendations. If not, locate the \share\qtcreator\templates\wizards\  
directory\folder and put the custom wizards in the relevant directory [classes][projects] - rename them as required.  
Qt Creator is not, as far as I know, very forgiving if there are two directories with the same name (one of which will usually  
be accompanied with -Copy). Qt Creator, again, as far I know, prefers all directories to have unique identifiers (names)._  
 
* Linux and macOS: 
   +      $HOME/.config/QtProject/qtcreator/templates/wizards

You may need to create a separate folder (with the identifier cmakecpp) in the relevant directory:

   + projects/cmakecpp  
   + classes/cmakecpp

You may need to restart Qt Creator, or do a factory reset (Probably easier to just restart Qt Creator)
You should restart Qt Creator using the [path-to-qt creator]/qtcreator -customwizard-verbose command.  
MS Windows should restart Qt Creator by navigating to the relevant folder (directory), in the command line interface or the Windows Terminal, and starting Qt Creator with the same command (preferably including the .exe extension): qtcreator.exe -customwizard-verbose  
If either is not picked up by Qt Creator, try starting Qt Creator from the commandline, using qtcreator -customwizard-verbose as the command.
If any of the starting processes fail, place the wizards in the root directories [location of qtcreator]/templates/wizards/[projects][classes] 
ensuring their ownership and permissions are correctly aligned to the other projects/classes and restart Qt Creator. 

## License
These two custom Qt Creator wizards are submitted using the LGPL v3 license.  Using them makes an assumption that you accept the license. If you wish to read the common precise of the LGPL v3 license, click the Read License checkbox on the front page of the wizard. 
If you do not wish to accept the license, delete the wizards from the relevant folder. 
There is, literally, no guarantee of merchantability and fitness for a particular purpose; there is also, no guarantee with these wizards. 
They have been tested using Qt Creator on Windows 10 and 11 and on Ubuntu 21.04 and OpenSuse Tumbleweed (as of January 2022). They have, currently, not been tested or used on any Apple Mac computer. 

## Notes - GTest
With the project "cmakegtestcppconsole" you will, almost certainly, want to change the default location for GTest. 
In the relavant wizard.json file (in the cmakegtestcppconsole directory) locate and change the line 18 so that instead of reading  
_C:/Tools/googletest/googletest-main/_ or is an empty field  
it should display where you have placed GTest.

To use Gtest with this project template, download the code (google/googletest from github) (I have found using the zip file the best way)  
and extract or clone it to a default location on your hard drive.  
Copy the path to the place where you have put GTest/googletest-main and write or paste it between the empty quotes or replace the current  
path. 
For my projects I use, for example, _C:\Tools\GTest_ and place googletest-main within this directory. This is the location that is copied into  
the value on Line 18. 
Which should now read:  
_{ "key": "GoogleTestLocation", "value": "Your default location for googletest" },_

Do not compile googletest - the normal compilation process, utilising cmake, will do this for you - for the individual project. It doesn't take  
very long and only does a full compile the once on the first compilation of the project; after this it just compiles the relevant sections of code  
as and when needed. 

## Updates
I will, of course, try to update the wizards in as timely manner as I can. I will not guarantee, nor accept demands for, immediate or fast turn arounds. 
If you wish for a fast turn around, you should implement the changes yourself. This way you can guarantee that what you have is what you want or need. 
Just copy the wizard and appropriate files and folders to a new folder, in the correct directory. Change the sections:

*     "supportedProjectTypes": [ ],  
*     "id": "AG.Class",  
*     "category": "AG.C++",  
*     "trDescription": "Creates a C++ declaration and definition files for a new class that you can add to a C++ project.",  
*     "trDisplayName": "Basic C++ Class",  
*     "trDisplayCategory": "Basic C++",  
 
 at the start of the wizard and have at it! :D 




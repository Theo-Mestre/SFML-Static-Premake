# SFML Static Premake

This repository provides a simple setup to create a SFML application using Premake 5. 
The solution includes two ready to use projects: `App` (an executable) and `Core` (a static library).
All dependencies are already included in this repo (premake5 and SFML 2.6.1).

### Cloning the Repository

```bash
git clone https://github.com/Theo-Mestre/SFML-Static-Premake.git
```

### Setting Up the Solution

1. **Run the setup script:**

   Execute the batch file provided in `Scripts/SetupSolution.bat` to generate the solution files:

   This will generate the project files. And you are now done with setting up the project !

## Repository Structure

```
SFML_Static_Premake/
├── App/
│   └── Source/
│   └── Build-App.lua
├── Core/
│   └── Source/
│   └── Build-Core.lua
├── Assets/ 				# working directory
├── Vendor/
│   └── Binaries/			# contains Premake binaries
│   └── include/			# include files used in the projectes
│   └── lib/				# lib used in the projectes	
│   └── LICENSES/					  
├── Scripts/
│   └── SetupSolution.bat
│   └── CleanSolution.bat
└── README.md
└── Build.lua
```

Solution and Projects names can be changed by modifying the `Build.lua` file

```lua
-- premake5.lua
ProjectName = "Sandbox"
CoreName = "Core"
AppName = "App"
```

### Directory Details

- **Core/**: Contains the source and header files for the static library project.
- **App/**: Contains the source and header files for the application project.
- **Assets/**: Is used as working directory.
- **Vendor/**: Contains lib and include files used in the two projects.
- **Vendor/Binaries/**: Contaisn Premake executable.
- **Scripts/**: Contains batch files to automate the solution setup using Premake.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- [SFML](https://www.sfml-dev.org/) - Simple and Fast Multimedia Library
- [Premake](https://premake.github.io/) - Powerfully simple build configuration tool

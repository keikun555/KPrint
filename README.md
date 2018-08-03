# kprint - a simple yet effective printer GUI for linux
A linux GUI for printing with lpc/lpr commands.
This program enables users to specify a file from commandline and parses printer names from `lpc`, creates a GUI that will enable the user to easily choose which printer to print to, and will send a request to that printer via `lpr`.
Created with QTCreator, a cross-platform C++, JavaScript and QML integrated development environment.

# Dependencies
* `qmake`, from QTCreator, which would be in default repositories in many distributions
* The linux printing system commands `lpc` and `lpr`
* I will update this list as soon as I find more

# How to install

1. Make sure you have all the dependencies above or the program would not compile/run
2. Clone or download the repository
3. Go to the `kprint/build` directory in the download file
4. Run the command below
```shell
qmake-qt5 ../kprint/kprint.pro -spec linux-g++ && /usr/bin/make qmake_all
```
5. in the `kprint/build` directory ()you should still be in the directory, run the `make` command to finish building
6. The executable `kprint` in the `kprint/build` is used to print files to printers.

# How to use
### It may be easier to copy the `kprint` file to your command path so that you can call it anywhere

### The syntax is as follows:
In commandline, `kprint [filepath]`
The `[filepath]` should be replaced with the path to your file that you want to print.

# Still in development
* The duplexer function (we currently have a dysfunctional checkbox)
* Choose format of printing
* Print layout

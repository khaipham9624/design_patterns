all: main.cpp Button.h TextBox.h WebButton.h WebButton.cpp WebTextBox.h WebTextBox.cpp WindowsButton.h WindowsButton.cpp WindowsTextBox.h WindowsTextBox.cpp
	g++ -o main main.cpp WebButton.cpp WindowsButton.cpp

MacOsDir = MacOs
WebDir = Web
WindowsDir = Windows

MacOsButton: $(MacOsDir)/MacOsButton.h $(MacOsDir)/MacOsButton.cpp Button.h
	g++ -c $(MacOsDir)/MacOsButton.cpp -I.

WebButton: $(WebDir)/WebButton.h $(WebDir)/WebButton.cpp Button.h
	g++ -c $(WebDir)/WebButton.cpp -I.

WindowsButton: $(WindowsDir)/WindowsButton.h $(WindowsDir)/WindowsButton.cpp Button.h
	g++ -c $(WindowsDir)/WindowsButton.cpp -I.

MacOsTextBox:$(MacOsDir)/TextBox.h $(MacOsDir)/TextBox.cpp TextBox.h
	g++ -c $(MacOsDir)/TextBox.cpp -I.

WebTextBox:$(MacOsDir)/TextBox.h $(MacOsDir)/TextBox.cpp TextBox.h

WindowsTextBox
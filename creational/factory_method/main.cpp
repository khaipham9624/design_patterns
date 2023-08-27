#include <iostream>
#include "MacOsButton.h"
#include "MacOsTextBox.h"
#include "MacOsDialog.h"
#include "WebButton.h"
#include "WebTextBox.h"
#include "WebDialog.h"
#include "WindowsButton.h"
#include "WindowsTextBox.h"
#include "WindowsDialog.h"
#include <memory>


int main(int argc, char* argv[]){
    Dialog *dialog = new WindowsDialog();

    Button *button = dialog->createButton();
    cout << button->onClick() << endl;
    delete button;

    TextBox *textBox = dialog->createTextBox();
    cout << textBox->align() << endl;
    delete textBox;
}
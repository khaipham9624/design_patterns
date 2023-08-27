#include "MacOsDialog.h"
#include "MacOsButton.h"
#include "MacOsTextBox.h"

Button* MacOsDialog::createButton(){
    return new MacOsButton();
}

TextBox* MacOsDialog::createTextBox(){
    return new MacOsTextBox();
}
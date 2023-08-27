#include "WindowsDialog.h"
#include "WindowsButton.h"
#include "WindowsTextBox.h"

Button* WindowsDialog::createButton(){
    return new WindowsButton();
}

TextBox* WindowsDialog::createTextBox(){
    return new WindowsTextBox();
}
#include "WebDialog.h"
#include "WebButton.h"
#include "WebTextBox.h"

Button* WebDialog::createButton(){
    return new WebButton();
}

TextBox* WebDialog::createTextBox(){
    return new WebTextBox();
}
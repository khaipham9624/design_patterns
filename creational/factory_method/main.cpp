#include <iostream>
#include "WindowsButton.h"
#include "WindowsTextBox.h"
#include "WebButton.h"
#include "WebTextBox.h"
#include <memory>

int main(int argc, char* argv[]){
    Button *button;
    button = new WindowsButton();
    button->onClick();
    delete button;

    TextBox *textBox;
    textBox = new WindowsTextBox();
    textBox->align();
    delete textBox;
}
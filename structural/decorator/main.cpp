#include "FacebookNotifier.h"
#include "SlackNotifier.h"
#include "SMSNotifier.h"
#include "NotifierDecorator.h"
#include <vector>


int main(){
    Notifier* notifier1 = new FacebookNotifier();
    Notifier* notifier2 = new SlackNotifier();
    Notifier* notifier3 = new SMSNotifier();
    NotifierDecorator* notifierDecorator = new NotifierDecorator();
    std::vector<Notifier*> notifiers;
    notifiers.push_back(notifier1);
    notifiers.push_back(notifier2);
    notifiers.push_back(notifier3);
    // notifierDecorator->setNotifier(notifier1);
    // notifierDecorator->send();

    for (auto& notifier : notifiers){
        notifierDecorator->setNotifier(notifier);
        notifierDecorator->send();
    }
}
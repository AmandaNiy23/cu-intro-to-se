#ifndef EVENT_H
#define EVENT_H

#include "Date.h"

//  Class:	  					 Event
//  Purpose:  					 Creates and stores an event in the Event Management Program.
//  Role in the Program:         Construction/destruction of event objects. Sets name of the event. Delegates setting the date/time of the date object. 
//                               Gets the date object inside of the Event object. Appends basic punctuation and string formatting to the output string. Stores the event name and\ a date object.					     

class Event
{
  public:
    Event(string="Default", int=0);
    virtual ~Event();
    void  setDate(int=0, int=0, int=0, int=0, int=0, int=0);
    Date& getDate();
    int   getPriority();
    virtual bool lessThan(Event*) = 0;
    void  format(string&);

  protected:
    string name;
    Date   date;
    int	   priority;
};

#endif
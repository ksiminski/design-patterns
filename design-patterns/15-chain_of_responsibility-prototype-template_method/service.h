/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/


#ifndef SERVICE_H
#define SERVICE_H

class service
{
protected:
    const service * pNext = nullptr;
    virtual bool ok (const parameters & p) const = 0;
    
public:
    service ();
    service (const service & orig);
    service (service && orig);
    service & operator =(const service & orig);
    service & operator =(service && orig);
    virtual ~service ();
    
    void add (const service & p);
    void add (const service * p);
    
    /** This method is a Template method design pattern. */
    bool serve (const parameters & p) const;

    /** This method is a prototype design pattern. */
    virtual service * clone () const = 0;
};

#endif

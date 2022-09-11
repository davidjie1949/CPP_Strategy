#ifndef WRITER_H
#define WRITER_H

#include <iostream>
#include <string>

class CWriter{
    public:
        /* constructor */
        // CWriter() = delete;
        
        /* copy constructor && copy assignment operator */
        CWriter(const CWriter &rhs) = delete;
        CWriter& operator=(const CWriter &rhs) = delete;

        /* move constructor && move assignment operator */
        CWriter(const CWriter &&rhs) = delete;
        CWriter& operator=(const CWriter &&rhs) = delete;
        
        /* destructor */
        virtual ~CWriter() {}

        virtual int WriteAtBegin(void *data, int length) = 0;
        virtual int WriteAt(int pos, void *data, int length) = 0;
        virtual int WriteAtEnd(void *data, int length) = 0;
};

#endif
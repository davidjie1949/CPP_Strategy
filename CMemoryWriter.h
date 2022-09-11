#ifndef MEMORY_WRITE_H
#define MEMORY_WRITE_H

#include<iostream>
#include<string>
#include"Writer.h"

namespace MemoryWriter{

    class CMemoryWriter : public CWriter{

        public:
            CMemoryWriter(){};
            ~CMemoryWriter();

            int WriteAtBegin(void *data, int length) override;
            int WriteAt(int pos, void *data, int length) override;
            int WriteAtEnd(void *data, int length) override;

        private:

    };  
}

#endif
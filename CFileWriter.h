#ifndef FILE_WRITE_H
#define FILE_WRITE_H

#include<iostream>
#include<string>
#include"Writer.h"

namespace FileWriter{

    class CFileWriter : public CWriter{

        public:
            CFileWriter(){};
            ~CFileWriter();

            int WriteAtBegin(void *data, int length) override;
            int WriteAt(int pos, void *data, int length) override;
            int WriteAtEnd(void *data, int length) override;

        private:

    };
}

#endif
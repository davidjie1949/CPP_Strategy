#include<iostream>
#include<string.h>
#include"Writer.h"

class Client final{
    public:
        Client (CWriter* writer): m_writer(writer){}
        Client () = delete;
        ~Client(){}

        bool DoProcess(){
            char buf[64] = {0};
            memset(buf,'A', 64);
            m_writer->WriteAtBegin(buf, 64);
            memset(buf, 'B', 32);
            m_writer->WriteAt(16, buf, 32);
            memset(buf, 'C', 64);
            m_writer->WriteAtEnd(buf, 64);
        }

    private:
        CWriter *m_writer;
};
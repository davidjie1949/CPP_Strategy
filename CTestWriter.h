#ifndef TEST_WRITER_H
#define TEST_WRITER_H

#include<iostream>
#include<vector>
#include"Writer.h"

namespace TestWriter {

    class CTestWriter : public CWriter{

        public:
            CTestWriter(){};
            ~CTestWriter();

            int WriteAtBegin(void *data, int length) override;
            int WriteAt(int pos, void *data, int length) override;
            int WriteAtEnd(void *data, int length) override;

        private:
            std::vector<std::pair<int, int>> m_logs;

    };  
}
#endif
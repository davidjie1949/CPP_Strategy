#include<iostream>
#include"CTestWriter.h"

namespace TestWriter{ 

            int CTestWriter::WriteAtBegin(void *data, int length){
                m_logs.push_back({0, length});
                    return length;
            }

            int CTestWriter::WriteAt(int pos, void *data, int length){
                    m_logs.push_back({pos, length});
                    return length;
            }

            int CTestWriter::WriteAtEnd(void *data, int length){
                    m_logs.push_back({0xFFFFFFF, length});
                    return length;
            }
}
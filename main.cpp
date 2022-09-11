#include<iostream>
#include "Client.h"

#include "CFileWriter.h"
#include "CMemoryWriter.h"
#include "CTestWriter.h"

int main(){
    FileWriter::CFileWriter writer("jie.txt");
    Client c (&writer);
    c.DoProcess();

    std::cout << "sizeof(c) = " << sizeof(c) << std::endl;

    MemoryWriter::CMemoryWriter writer2;
    Client c2 (&writer2);
    c2.DoProcess();

    TestWriter::CTestWriter writer3;
    Client c3 (&writer3);
    c3.DoProcess();

    return 0;
}

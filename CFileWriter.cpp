#include <iostream>
#include "CFileWriter.h"

namespace FileWriter{ 

            int CFileWriter::WriteAtBegin(void *data, int length){
                    std::cout << "Write " << length << " bytes at file begin" << std::endl;
                    return length;
            }

            int CFileWriter::WriteAt(int pos, void *data, int length){
                    std::cout << "Write" << length << " bytes at " <<  pos << std::endl;
                    return length;
            }

            int CFileWriter::WriteAtEnd(void *data, int length){
                    std::cout << "WriteAtEnd" << length << std::endl;
                    return length;
            }   
}
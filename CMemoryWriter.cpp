#include <iostream>
#include "CMemoryWriter.h"

namespace MemoryWriter{ 

            int CMemoryWriter::WriteAtBegin(void *data, int length){
                    std::cout << "Write " << length << " bytes at file begin" << std::endl;
                    return length;
            }

            int CMemoryWriter::WriteAt(int pos, void *data, int length){
                    std::cout << "Write" << length << " bytes at " <<  pos << std::endl;
                    return length;
            }

            int CMemoryWriter::WriteAtEnd(void *data, int length){
                    std::cout << "WriteAtEnd" << length << std::endl;
                    return length;
            }
}
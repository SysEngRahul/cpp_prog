#include<fstream>
#include<string.h>

class FileRaii
{
    public:
        FileRaii (const std::string& filename)
        {
            file.open(filename);
        }

        ~FileRaii()
        {
            if(file.is_open())
            {
                file.close();
            }
        }

        std::fstream& get()
        {
            return file;
        }

    private:
        std::fstream file;
};

void processFile(const std::string& filename)
{
    FileRaii file(filename);
}


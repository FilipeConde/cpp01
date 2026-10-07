#ifndef CHUNK_HPP
# define CHUNK_HPP
# include <string>

class Chunk{
  public:
    Chunk();
    ~Chunk();

    std::string getInput();
    void setInput(std::string line);
    std::string getOutput();
    void setOutput(const std::string &target, const std::string &newStr);

  private:
    std::string _input;
    std::string _output;

};

#endif
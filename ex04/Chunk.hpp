#ifndef CHUNK_HPP
# define CHUNK_HPP
# include <string>

class Chunk{
  public:
    Chunk();
    ~Chunk();

    std::string getInput();
    void setInput();
    std::string getOutput();
    void setOutput();

  private:
    std::string _input;
    std::string _output;

};

#endif
#include <string>
#include <vector>
#include <memory>
#include <unordered_map>
#include <iomanip>
#include <stdexcept>
#include "commands.hpp"
namespace sogdanov {
  using NotePtr = std::shared_ptr<Note>;
  using NoteMap = std::unordered_map<std::string, NotePtr>;
  void cmd_note(std::istream &in, std::ostream &, NoteMap notes)
  {
    std::string name;
    in >> name;
    auto it = notes.find(name);
    if (it == notes.end() || !it->second)
    {
      NotePtr n = std::make_shared<Note>();
      n->name = name;
      notes[name] = n;
    }
  }
}
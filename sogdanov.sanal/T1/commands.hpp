#ifndef COMMANDS_HPP
#define COMMANDS_HPP
#include <iostream>
namespace sogdanov
{
  void cmd_note(std::istream &in, std::ostream &out);
  void cmd_line(std::istream &in, std::ostream &out);
  void cmd_show(std::istream &in, std::ostream &out);
  void cmd_drop(std::istream &in, std::ostream &out);
  void cmd_link(std::istream &in, std::ostream &out);
  void cmd_halt(std::istream &in, std::ostream &out);
  void cmd_mind(std::istream &in, std::ostream &out);
  void cmd_expired(std::istream &in, std::ostream &out);
  void cmd_refresh(std::istream &in, std::ostream &out);
}
#endif
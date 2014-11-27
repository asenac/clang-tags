#include "application.hxx"
#include "sourceFile.hxx"

void Application::getUsr (const GetUsrArgs & args, std::ostream & cout) {
  Json::FastWriter writer;

  const auto usr = storage_.getUsr (args.fileName, args.offset);
  if (!usr.empty ()) {
    Json::Value json;
    json["usr"] = usr;
    cout << writer.write (json);
  }
}

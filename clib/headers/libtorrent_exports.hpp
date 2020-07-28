#ifndef LIBTORRENTS_EXPORTS_HPP_IMPORTED
#define LIBTORRENTS_EXPORTS_HPP_IMPORTED
#include "libtorrent_exports.h"
#include <cstdlib>

#include "libtorrent/session.hpp"

struct torrent_session {
  lt::session session;
  std::vector<lt::alert*> alert_queue;
  std::vector<std::string> last_torrent_filenames;
  torrent_session(lt::settings_pack settings) : session(settings)
  {}
};

typedef struct {
  alert_type alert;
  std::string *torrent_str;
  std::vector<char> *read_buffer_vector;
} alert_type_holder;


// typedef lt::alert* lt_alert_ptr;
#endif

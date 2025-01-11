#include "../stub.h"
#include "gmodule.h"

void initialize_gmodule(void);
void close_gmodule(void);

GQuark (g_module_error_quark)(void);
gboolean (g_module_supported)(void);
GModule * (g_module_open)(const gchar * file_name, GModuleFlags flags);
GModule * (g_module_open_full)(const gchar * file_name, GModuleFlags flags, GError * * error);
gboolean (g_module_close)(GModule * module);
void (g_module_make_resident)(GModule * module);
const gchar * (g_module_error)(void);
gboolean (g_module_symbol)(GModule * module, const gchar * symbol_name, gpointer * symbol);
const gchar * (g_module_name)(GModule * module);
gchar * (g_module_build_path)(const gchar * directory, const gchar * module_name);
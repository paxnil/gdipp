#pragma once

#include "gdipp_lib/lru.h"
#include "gdipp_server/glyph_run.h"

namespace gdipp
{

class glyph_cache
{
public:
	typedef uint128_t string_id_type;
	typedef uint128_t char_id_type;

	static string_id_type get_string_id(const wchar_t *string, unsigned int count, bool is_glyph_index);
	static char_id_type get_char_id(uint128_t render_trait, FT_UInt index, bool is_glyph_index);

	glyph_cache();
	~glyph_cache();

	const FT_Glyph lookup_glyph(char_id_type char_id) const;
	bool store_glyph(char_id_type char_id, const FT_Glyph glyph);
	const glyph_run *lookup_glyph_run(uint128_t string_id, uint128_t render_trait) const;
	bool store_glyph_run(uint128_t string_id, uint128_t render_trait, glyph_run *a_glyph_run);

private:
	// std::map from render trait to glyph run
	typedef std::map<uint128_t, glyph_run *> trait_to_run_map;

	// std::map from character ID (including character index and render trait) to its glyph
	std::map<char_id_type, const FT_Glyph> _glyph_store;
	// std::map from string ID to glyph run
	std::map<uint128_t, trait_to_run_map> _glyph_run_store;

	// least recently used glyph runs, indexed by string ID
	lru_list<uint128_t> _glyph_run_lru;
};

}

#pragma once

using namespace std;

// demo settings
extern int total_count;
extern int thread_count;
extern bool random_text;
extern vector<wstring> paint_fonts;

// gdimm related
extern HMODULE h_gdimm;
extern WCHAR gdimm_path[MAX_PATH];
extern vector<HWND> paint_hwnd;
#pragma once
struct elem
{
	int x;
	elem* next = nullptr;
	elem* prev = nullptr;
};
struct list2
{
	elem* first = nullptr;
	elem* last = nullptr;
	int count = 0;
};
void add(list2& list, int data);
bool remove(list2& list, int pos);
void clear(list2& list);
const int* get(list2 list, int pos);
bool is_get();
size_t get_content_length();
void get_form_data(char*& data);
void get_param_value(char*& value, const char* param_name, const char* data);
void str_decode(char*& dec_str, const char* enc_str);
void add_to_begin(list2& list, int data);

#pragma once
#include <unordered_map>
#include <vector>
#include "Entity.h"
#include "Event.h"

//Py������
inline std::unordered_map<EventCode, std::vector<PyObject*>> g_callback_functions;
//ע������
inline std::unordered_map<std::string, std::pair<std::string, PyObject*>> g_commands;
//�˺�
inline int g_damage = 0;

PyObject* mc_init();
#include "${project_name}lib/Example.h"

using namespace ${project_name}lib;
using namespace std;

Example::Example(const string& name) : _name(name) { }

Example::~Example() = default;

const string& Example::name() const
{
    return _name;
}

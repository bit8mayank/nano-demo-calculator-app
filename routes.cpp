#include "crow_all.h"

crow::response greet()
{
    return crow::response{"Hello Wold!"};
}
crow::response add(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    crow::json::wvalue ans;
    ans=input[first].i()+input[second].i();
    return ans;
}
crow::response subtract(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    crow::json::wvalue ans;
    ans=input[first].i()-input[second].i();
    return ans;
}

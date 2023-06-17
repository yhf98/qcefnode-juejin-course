/*
 * @Author: 姚恒锋 1921934563@qq.com
 * @Date: 2023-06-16 16:19:10
 * @LastEditors: 姚恒锋 1921934563@qq.com
 * @LastEditTime: 2023-06-17 18:16:59
 * @FilePath: \qcefnode-juejin-course\ch-6\main.cc
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <node_api.h>
#include <cstdlib>
NAPI_MODULE_INIT() {
    const char str[] = "hello world";
    napi_value value;
    napi_status status = napi_create_string_utf8(env, str, sizeof(str), &value);
    if (status != decltype(status)::napi_ok) {
        std::abort();
    }
    return value;
}
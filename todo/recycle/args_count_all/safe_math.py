from pathlib import Path
import re

"""
Example:
    if ((safe_mul_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s((-9L), 0x20L)) , (g_2871 , ((((g_2872 , (p_20 | (((*l_2890) |= ((((safe_sub_func_int64_t_s_s((3L ^ 65526UL), (safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((+(safe_sub_func_uint64_t_u_u(p_18, ((safe_sub_func_int64_t_s_s(((*g_480) = ((safe_rshift_func_uint8_t_u_u(0xA9L, l_2888)) && 0UL)), (*g_1491))) <= l_2640)))) & l_2605[0][2][1]), 0xCF8FL)), 0x5AL)))) , (**g_1490)) || p_18) != p_20)) | 1UL))) == p_18) <= (*p_19)) , l_2891))) != l_2818), l_2892)))
    { /* block id: 1326 */
        return p_18;
    }
"""

theRegEx = r"safe[_a-z]+func"

class SafeMath:
    
    def __init__(self, astPath):
        self.astPath = astPath

    def getCount(self):
        txtAST = Path(self.astPath).read_text()
        return str(len(re.findall(theRegEx, txtAST)))

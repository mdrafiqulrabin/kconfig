import glob
import pathlib
import pandas as pd

data="../../../data/gcc_n"
vr=["482","540","610","710","810","910","trunk"]
st="kconfig"
nc=134

n_cb = [0] * nc
n_to = [0] * nc
n_mc = [0] * nc

def get_nbug(st):
    cb_content = set()
    to_content = set()
    mc_content = set()
    for v in vr:
        pth = data+"/"+v+"/"+st
        lst = list(pathlib.Path(pth).glob('**/*.txt'))
        for fname in lst:
            fname = str(fname)
            content = ""
            with open(fname) as f: content = f.readlines()
            content = [int(((x.strip()).split(".c")[0]).split("/")[-1]) for x in content]
            if "cb" in fname: cb_content.update(content)
            elif "mc" in fname: mc_content.update(content)
            else: to_content.update(content)
    return [sorted(cb_content),sorted(to_content),sorted(mc_content)]


def save_nbug(st, content):
    col_names =  ['Setting', 'CB', 'TO', 'MC']
    df = pd.DataFrame(columns = col_names)
    df = df.append({'Setting':st, 'CB':content[0], 'TO':content[1], 'MC':content[2]} , ignore_index=True)
    df.to_csv("nbug.csv",index=False)
content = get_nbug(st)
save_nbug(st, content)



# save the print as cbug.csv
def get_nbug(content):
    for i in content[0]: n_cb[(i%nc)-1] += 1
    for i in content[1]: n_to[(i%nc)-1] += 1
    for i in content[2]: n_mc[(i%nc)-1] += 1
    print("n_cb = ", n_cb)
    print("n_to = ", n_to)
    print("n_mc = ", n_mc)
    return [n_cb, n_to, n_mc]
content = get_nbug(content)

INSTRUCTIONS:

https://ace3mod.com/wiki/development/setting-up-the-development-environment.html

-mod=@z\spag
python make.py version increment_patch force release
python make.py version increment_patch force checkexternal release
python make.py version increment_patch checkexternal release



original makepbo command call:
"-P","-A","-G","-N","-X=*.backup"


current
"-P","-A","-B","-F","-S","-X=*.backup"

cmd = [makepboTool, "-P","-A","-N","-X=*.backup", os.path.join(work_drive, prefix, module),os.path.join(module_root, release_dir, project,"addons")]
import subprocess

output = str(subprocess.check_output(["git", "clang-format", "--diff"]))

if output:
    print("Run git clang-format, add the modified files, then commit\n")
    exit(1)
else:
    exit(0)

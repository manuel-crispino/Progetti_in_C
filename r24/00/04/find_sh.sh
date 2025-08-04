find . \! -name '*.gitignore' \! -name '*.sh' -print | xargs git check-ignore -v | cut -f2- | sed 's|^\./||'

_buildcg()
{
    local cur prev opts
    COMPREPLY=()
    cur="${COMP_WORDS[COMP_CWORD]}"
    prev="${COMP_WORDS[COMP_CWORD-1]}"

    opts=`whereis buildcg.py | cut -f2 -d" " | xargs cat | grep -e "'r':" | cut -f1 -d":" | sed -e "s/\s*'//" | sed -e "s/'//" | tr '\n' ' '`
    COMPREPLY=( $(compgen -W "${opts}" -- ${cur}) )
}
complete -F _buildcg buildcg.py

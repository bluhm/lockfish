_buildcg()
{
    local cur prev opts
    COMPREPLY=()
    cur="${COMP_WORDS[COMP_CWORD]}"
    prev="${COMP_WORDS[COMP_CWORD-1]}"

#    echo "Status: cur=$cur prev=$prev\n"
    if [[ ${prev} == "buildcg.py" ]] ; then
      COMPREPLY=(  $(compgen -W "config roots -h --help" -- ${cur}) )
    elif [[ ${prev} == config ]] ; then
      opts=`whereis buildcg.py | cut -f2 -d" " | xargs cat | grep -e "'r':" | cut -f1 -d":" | sed -e "s/\s*'//" | sed -e "s/'//" | tr '\n' ' '`
      COMPREPLY=( $(compgen -W "${opts}" -- ${cur}) )
    elif [[ ${cur} == -* ]] ; then
      echo "Pass"
    fi
}
complete -F _buildcg buildcg.py

function main() {
  for i in $(cat ./words.txt); do 
    res=$(echo $i | ./download.elf)
    echo $res
    correct=$(echo $i | ./download.elf | cut -f3 -d ' ')
    if [[ "$correct" == "Correct" ]]; then
      echo "Password found: $i"
      break
    fi
  done
}

main

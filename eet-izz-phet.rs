use std::{io::stdin, collections::HashMap};

fn main() {
    let mut s_num = String::new();
    stdin().read_line(&mut s_num).expect("IO Error");
    let mut num = s_num.trim().parse::<u32>().expect("NaN");

    let mut words: HashMap::<String, u32>= HashMap::new();

    for _ in 0..num {
        let mut word = String::new();
        stdin().read_line(&mut word).expect("IO Error");
        words.entry(word).and_modify(|x| *x += 1).or_insert(1);
    }
    
    let mut ss_num = String::new();
    stdin().read_line(&mut ss_num).expect("IO Error");
    num = ss_num.trim().parse::<u32>().expect("NaN");
    for _ in 0..num {
        let mut word = String::new();
        stdin().read_line(&mut word).expect("IO Error");

        if words.get(&word) != None {
            println!("yes");
        } else {
            println!("no");
        }
    }
}

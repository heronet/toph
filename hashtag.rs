use std::io::stdin;

fn main() {
    let mut tag = String::new();
    stdin().read_line(&mut tag).expect("IO Error");
    let hashtag = tag.replace(" ", "");
    println!("{}", hashtag);
}

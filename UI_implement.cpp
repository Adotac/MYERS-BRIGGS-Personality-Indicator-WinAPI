#include "Header_Persona.h"

void printPersona(ROLE role, uInfo *user) {
	char* ptype[CHAR_MAX] = STR_PTYPE;
	char* srole[CHAR_MAX] = STR_ROLE;
	char* itype[CHAR_MAX] = INTITIAL_TYPES;

	printf("\n\nYou are a/n %s [%s], one of the %s roles.\n", 
		ptype[user->persona-1], itype[user->persona-1], srole[role]);
}

void printAnalyst() {
	printf("\n----------------------------------------------------------------------------");
	printf("\nBeing one of the personality types in the Analysts Role, embraces rationality and impartiality, ");
	printf("\nexcelling in intellectual debates and scientific or technological fields. They are fiercely");
	printf("\nindependent, open-minded, strong-willed and imaginative, approaching many things from a");
	printf("\nutilitarian perspective and being far more interested in what works than what satisfies");
	printf("\neverybody. These traits make Analysts excellent strategic thinkers, but also cause difficulties");
	printf("\nwhen it comes to social or romantic pursuits.");

	printf("\n\nIf you want to know more, please visit \"https://www.16personalities.com\""); 
}
void printDiplomats() {
	printf("\n----------------------------------------------------------------------------");
	printf("\nBeing one of the personality types in the Diplomats Role, they focus on empathy and cooperation,");
	printf("\nshining in diplomacy and counselling. People belonging to this type group are cooperative and");
	printf("\nand imaginative, often playing the role of harmonizers in their workplace or social circles. ");
	printf("\nThese traits make Diplomats warm, empathic and influential individuals, but also cause issues");
	printf("\nissues when there is a need to rely exclusively on cold rationality or make difficult decisions.");

	printf("\n\nIf you want to know more, please visit \"https://www.16personalities.com\"");
}
void printSentinels() {
	printf("\n----------------------------------------------------------------------------");
	printf("\nBeing one of the personality types in the Sentinels Role, they are cooperative and highly practical,");
	printf("\nembracing and creating order, security and stability wherever they go. People belonging to one of");
	printf("\nthese types tend to be hard working, meticulous and traditional, and excel in logistical or administrative");
	printf("\nfields, especially those that rely on clear hierarchies and rules. These personality types stick to their");
	printf("\nplans and do not shy away from difficult tasks – however, they can also be very inflexible and reluctant");
	printf("\nto accept different points of view.");

	printf("\n\nIf you want to know more, please visit \"https://www.16personalities.com\"");
}
void printExplorers() {
	printf("\n----------------------------------------------------------------------------");
	printf("\nBeing one of the personality types in the Explorers Role, these types are the most spontaneous of all and ");
	printf("\nthey also share the ability to connect with their surroundings in a way that is beyond reach of other types.");
	printf("\nExplorers are utilitarian and practical, shining in situations that require quick reaction and ability to");
	printf("\nthink on your feet. They are masters of tools and techniques, using them in many different ways - ranging");
	printf("\nfrom mastering physical tools to convincing other people. Unsurprisingly, these personality types are");
	printf("\nirreplaceable in crises, crafts and sales – however, their traits can also push them towards undertaking");
	printf("\nrisky endeavors or focusing solely on sensual pleasures.");

	printf("\n\nIf you want to know more, please visit \"https://www.16personalities.com\"");
}

void printAnalyst_types(PTYPE type) {
	switch (type) {
	case ARCHITECT:
		printf("\nAn Architect is a person with the Introverted, Intuitive, Thinking, and Judging personality traits.");
		printf("\nThese thoughtful tacticians love perfecting the details of life, applying creativity and rationality to everything they do.\nTheir inner world is often a private, complex one.");

		printf("\n\nThese personalities can be both the boldest of dreamers and the bitterest of pessimists. Architects believe that,");
		printf("\nthrough willpower and intelligence, they can achieve even the most challenging of goals. But they may be cynical about human ");
		printf("\nnature more generally, assuming that most people are lazy, unimaginative, or simply doomed to mediocrity.");

		printf("\n\nArchitects derive much of their self-esteem from their knowledge and mental acuity. In school, ");
		printf("\npeople with this personality type may have been called “bookworms” or “nerds.” But rather than taking these labels as insults, many Architects embrace them.");
		printf("\nThey are confident in their ability to teach themselves about – and master – any topic that interests them, whether that's coding or capoeira or classical music.");

		printf("\n\nThis personality type comes with a strong independent streak. Architects don't mind acting alone,");
		printf("\nperhaps because they don't like waiting around for others to catch up with them. They also generally");
		printf("\nfeel comfortable making decisions without asking for anyone else's input. At times, this lone-wolf");
		printf("\nbehavior can come across as insensitive, as it fails to take into consideration other people's thoughts, desires, and plans.");
		break;
	case LOGICIAN:
		printf("\nA Logician (INTP) is someone with the Introverted, Intuitive, Thinking, and Prospecting personality traits. ");
		printf("\nThese flexible thinkers enjoy taking an unconventional approach to many aspects of life.");
		printf("\nThey often seek out unlikely paths, mixing willingness to experiment with personal creativity.");

		printf("\n\nLogicians pride themselves on their unique perspectives and vigorous intellect. They can't help");
		printf("\nbut puzzle over the mysteries of the universe – which may explain why some of the most influential ");
		printf("\nphilosophers and scientists of all time have been Logicians. This personality type is fairly rare,");
		printf("\nbut with their creativity and inventiveness, Logicians aren't afraid to stand out from the crowd.");

		printf("\n\nPeople with this personality type want to understand everything in the universe, but one area in particular tends to mystify them: human nature.");
		printf("\nAs their name suggests, Logicians feel most at home in the realm of logic and rationality. As a result, they can find themselves baffled by the illogical,");
		printf("\nirrational ways that feelings and emotions influence people's behavior – including their own. This doesn't mean that Logicians are unfeeling.");
		printf("\nThese personalities generally want to offer emotional support to their friends and loved ones, but they don't necessarily know how. Logicians often lose themselves");
		printf("\nin thought – which isn't necessarily a bad thing. People with this personality type hardly ever stop thinking. From the moment they wake up, their");
		printf("\nminds buzz with ideas, questions, and insights. At times, they may even find themselves conducting full-fledged debates in their own heads.");
		break;
	case COMMANDER:
		printf("\nA Commander (ENTJ) is someone with the Extraverted, Intuitive, Thinking, and Judging personality traits.");
		printf("\nThey are decisive people who love momentum and accomplishment. They gather information");
		printf("\nto construct their creative visions but rarely hesitate for long before acting on them.");

		printf("\n\nCommanders are natural-born leaders. People with this personality type embody the gifts of charisma and confidence,");
		printf("\nand project authority in a way that draws crowds together behind a common goal. However, Commanders are also");
		printf("\ncharacterized by an often ruthless level of rationality, using their drive, determination and sharp minds to");
		printf("\nachieve whatever end they've set for themselves. Perhaps it is best that they make up only three percent of the");
		printf("\npopulation, lest they overwhelm the more timid and sensitive personality types that make up much of the rest");
		printf("\nof the world – but we have Commanders to thank for many of the businesses and institutions we take for granted every day.");

		printf("\n\nCommanders are true powerhouses, and they cultivate an image of being larger than life – and often enough they are. They need to");
		printf("\nremember though, that their stature comes not just from their own actions, but from the actions of the team that props them up,");
		printf("\nand that it's important to recognize the contributions, talents and needs, especially from an emotional perspective, of their support");
		printf("\nnetwork. Even if they have to adopt a \"fake it ‘til you make it\" mentality, if Commanders are able to combine an emotionally healthy ");
		printf("\nfocus alongside their many strengths, they will be rewarded with deep, satisfying relationships and all the challenging victories they can handle.");
		break;
	case DEBATOR:
		printf("\nA Debater (ENTP) is a person with the Extraverted, Intuitive, Thinking, and Prospecting personality ");
		printf("\ntraits. They tend to be bold and creative, deconstructing and rebuilding ideas with great mental ");
		printf("\nagility. They pursue their goals vigorously despite any resistance they might encounter.");

		printf("\n\nDebaters are the ultimate devil's advocate, thriving on the process of shredding arguments and beliefs");
		printf("\nand letting the ribbons drift in the wind for all to see. They don't always do this because they are trying to");
		printf("\nachieve some deeper purpose or strategic goal, though. Sometimes it's for the simple reason that it's fun.");
		printf("\nTaking a certain pleasure in being the underdog, Debaters enjoy the mental exercise found in questioning the prevailing");
		printf("\nmode of thought, making them irreplaceable in reworking existing systems or shaking things up and pushing them in clever");
		printf("\nnew directions. However, they'll be miserable managing the day-to-day mechanics of actually implementing their suggestions.");
		break;
	}
}
void printDiplomat_types(PTYPE type) {
	switch (type) {
	case ADVOCATE:
		printf("\nAn Advocate (INFJ) is someone with the Introverted, Intuitive, Feeling, and Judging personality traits.");
		printf("\nThey tend to approach life with deep thoughtfulness and imagination. Their inner vision,");
		printf("\npersonal values, and a quiet, principled version of humanism guide them in all things.");
		
		printf("\n\nAdvocates are the rarest personality types of all. Still, Advocates leave their mark on the world.");
		printf("\nThey have a deep sense of idealism and integrity, but they aren't idle dreamers – they take concrete");
		printf("\nsteps to realize their goals and make a lasting impact. Advocates' unique combination of personality traits");
		printf("\nmakes them complex and quite versatile. For example, Advocates can speak with great passion and conviction, ");
		printf("\nespecially when standing up for their ideals. At other times, however, they may choose to be soft-spoken");
		printf("\nand understated, preferring to keep the peace rather than challenge others.");

		printf("\n\nMany Advocates feel compelled to find a mission for their lives. When they encounter ");
		printf("\ninequity or unfairness, they tend to think, \"How can I fix this?\" They are well-suited to ");
		printf("\nsupport a movement to right a wrong, no matter how big or small. Advocates just need to");
		printf("\nremember that while they're busy taking care of the world, they need to take care of themselves too.");
		break;
	case MEDIATOR:
		printf("\nA Mediator (INFP) is someone who possesses the Introverted, Intuitive, Feeling, ");
		printf("\nand Prospecting personality traits. These rare personality types tend to be quiet, open-minded,");
		printf("\nand imaginative, and they apply a caring and creative approach to everything they do.");

		printf("\n\nMediators share a sincere curiosity about the depths of human nature. Introspective to the core,");
		printf("\nthey're exquisitely attuned to their own thoughts and feelings, but they yearn to understand the");
		printf("\npeople around them as well. Mediators are compassionate and nonjudgmental, always willing to hear");
		printf("\nanother person's story. When someone opens up to them or turns to them for comfort, they feel");
		printf("\nhonored to listen and be of help.");

		printf("\n\nPeople with this personality type tend to feel directionless or stuck until they connect with a sense of purpose");
		printf("\nfor their lives. For many Mediators, this purpose has something to do with uplifting others and their ability to ");
		printf("\nfeel other people's suffering as if it were their own. While Mediators want to help everyone, they need to focus");
		printf("\ntheir energy and efforts – otherwise, they can end up exhausted. ");
		printf("\nMediators' creativity and idealism can bloom even after the darkest of seasons. Although they know the world");
		printf("\nwill never be perfect, Mediators still care about making it better however they can. This quiet belief in doing");
		printf("\nthe right thing may explain why these personalities so often inspire compassion, kindness, and beauty wherever they go.");
		break;
	case PROTAGONIST:
		printf("\nA Protagonist (ENFJ) is a person with the Extraverted, Intuitive, Feeling, and Judging personality traits.");
		printf("\nThese warm, forthright types love helping others, and they tend to have strong ideas and values.");
		printf("\nThey back their perspective with the creative energy to achieve their goals.");
		
		printf("\n\nProtagonists feel called to serve a greater purpose in life. Thoughtful and idealistic, these personality");
		printf("\ntypes strive to have a positive impact on other people and the world around them. They rarely shy away from");
		printf("\nan opportunity to do the right thing, even when doing so is far from easy. Protagonists are born leaders, which explains");
		printf("\nwhy these personalities can be found among many notable politicians, coaches, and teachers. Their passion and charisma");
		printf("\nallow them to inspire others not just in their careers but in every arena of their lives, including their relationships.");

		printf("\n\nPeople with this personality type are devoted altruists, ready to face slings and arrows in order to stand up for the people");
		printf("\nand ideas that they believe in. This strength of conviction bolsters Protagonists' innate leadership skills, particularly their");
		printf("\nability to guide people to work together in service of the greater good. ");
		printf("\nBut their greatest gift might actually be leading by example. In their day-to-day lives,");
		printf("\nProtagonists reveal how seemingly ordinary situations can be handled with compassion, dedication, and care.");
		printf("\nFor these personalities, even the smallest daily choices and actions – from how they spend their weekend to");
		printf("\nwhat they say to a coworker who is struggling – can become an opportunity to lead the way to a brighter future.");
		break;
	case CAMPAIGNER:
		printf("\nA Campaigner (ENFP) is someone with the Extraverted, Intuitive, Feeling, and Prospecting personality traits.");
		printf("\nThese people tend to embrace big ideas and actions that reflect their sense of hope and goodwill toward others.");
		printf("\nTheir vibrant energy can flow in many directions.");
		
		printf("\n\nFriendly and outgoing, Campaigners are devoted to enriching their relationships and their social lives.");
		printf("\nCampaigners don't just care about having a good time. These personality types run deep as does they're ");
		printf("\nlonging for meaningful, emotional connections with other people. When something sparks their imagination,");
		printf("\nCampaigners can show an enthusiasm that is nothing short of infectious. These personalities radiate a");
		printf("\npositive energy that draws in other people.");

		printf("\n\nCampaigners are proof that seeking out life's joys and pleasures isn't the same as being shallow. ");
		printf("\nSeemingly in the blink of an eye, people with this personality type can transform from impassioned");
		printf("\nidealists to carefree figures on the dance floor. People with this personality type need to be careful, however.");
		printf("\nCampaigners' intuition may lead them to read far too much into other people's actions and behaviors. Instead");
		printf("\nof simply asking for an explanation, Campaigners may end up puzzling over someone else's desires or intentions.");
		printf("\nCampaigners will spend a lot of time exploring different relationships, feelings, and ideas before they find a");
		printf("\npath for their lives that feels right. But when they finally do find their way, it can light up not only their");
		printf("\n own lives but also the world around them.");
		break;
	}

}
void printSentinel_types(PTYPE type) {
	switch (type) {
	case LOGISTICIAN:
		printf("\nA Logistician (ISTJ) is someone with the Introverted, Observant, Thinking, and Judging ");
		printf("\npersonality traits.These people tend to be reserved yet willful, with a rational outlook on life. ");
		printf("\nThey compose their actions carefully and carry them out with methodical purpose.");
		
		printf("\n\nLogisticians don't make many assumptions, preferring instead to analyze their surroundings,");
		printf("\ncheck their facts and arrive at practical courses of action. Logistician personalities are no-nonsense,");
		printf("\nand when they've made a decision, they will relay the facts necessary to achieve their goal, expecting");
		printf("\nothers to grasp the situation immediately and take action. Logisticians have little tolerance for");
		printf("\nindecisiveness, but lose patience even more quickly if their chosen course is challenged with impractical");
		printf("\ntheories, especially if they ignore key details – if challenges becomes time-consuming debates, Logisticians");
		printf("\ncan become noticeably angry as deadlines tick nearer.");

		printf("\n\nLogisticians' dedication is an excellent quality, allowing them to accomplish much, but it is also a");
		printf("\ncore weakness that less scrupulous individuals take advantage of. Logisticians seek stability and security,");
		printf("\nconsidering it their duty to maintain a smooth operation, and they may find that their coworkers and significant");
		printf("\nothers shift their responsibilities onto them, knowing that they will always take up the slack. Logisticians tend");
		printf("\nto keep their opinions to themselves and let the facts do the talking.");
		break;
	case DEFENDER:
		printf("\nA Defender (ISFJ) is someone with the Introverted, Observant, Feeling,");
		printf("\nand Judging personality traits. These people tend to be warm and unassuming in their own steady way.");
		printf("\nThey're efficient and responsible, giving careful attention to practical details in their daily lives.");

		printf("\n\nThe Defender personality type is quite unique, as many of their qualities defy the definition of their individual traits.");
		printf("\nThough sensitive, Defenders have excellent analytical abilities; though reserved, they have well-developed people skills and");
		printf("\nrobust social relationships; and though they are generally a conservative type, Defenders are often receptive to change and new ideas.");
		printf("\nDefenders take their responsibilities personally, consistently going above and beyond, doing everything they can to exceed expectations");
		printf("\nand delight others, at work and at home.");

		printf("\n\nDefender personalities are a wonderful group, rarely sitting idle while a worthy cause remains unfinished.");
		printf("\nDefenders' ability to connect with others on an intimate level is unrivaled among Introverts, and the joy they experience");
		printf("\nin using those connections to maintain a supportive, happy family is a gift for everyone involved. They may never be truly");
		printf("\ntruly comfortable in the spotlight, and may feel guilty taking due credit for team efforts, but if they can ensure that their");
		printf("\nefforts are recognized, Defenders are likely to feel a level of satisfaction in what they do that many other personality types can only dream of.");
		break;
	case EXECUTIVE:
		printf("\nAn Executive (ESTJ) is someone with the Extraverted, Observant, Thinking, and Judging personality traits.");
		printf("\nThey possess great fortitude, emphatically following their own sensible judgment. They often serve as a");
		printf("\nstabilizing force among others, able to offer solid direction amid adversity.");

		printf("\n\nExecutives are representatives of tradition and order, utilizing their understanding of what is right, wrong and socially");
		printf("\nacceptable to bring families and communities together. Embracing the values of honesty, dedication and dignity, people with the");
		printf("\nExecutive personality type are valued for their clear advice and guidance, and they happily lead the way on difficult paths.");
		printf("\nTaking pride in bringing people together, Executives often take on roles as community organizers, working hard to bring everyone together.");

		printf("\n\nExecutives are aware of their surroundings and live in a world of clear, verifiable facts – the surety of their knowledge");
		printf("\nmeans that even against heavy resistance, they stick to their principles and push an unclouded vision of what is and is not acceptable.");
		printf("\nTheir opinions aren't just empty talk either, as Executives are more than willing to dive into the most challenging projects, improving");
		printf("\naction plans and sorting details along the way, making even the most complicated tasks seem easy and approachable.");
		break;
	case CONSUL:
		printf("\nA Consul (ESFJ) is a person with the Extraverted, Observant, Feeling, and Judging personality traits.");
		printf("\nThey are attentive and people-focused, and they enjoy taking part in their social community. Their achievements");
		printf("\nare guided by decisive values, and they willingly offer guidance to others.");

		printf("\n\n Consul personality type are popular which makes sense, given that it is also a very common personality type,");
		printf("\nmaking up twelve percent of the population. Consuls continue to enjoy supporting their friends and loved ones,");
		printf("\n organizing social gatherings and doing their best to make sure everyone is happy.");


		printf("\n\nSupportive and outgoing, Consuls can always be spotted at a party – they're the ones finding time to chat and laugh with everyone!");
		printf("\nConsuls truly enjoy hearing about their friends' relationships and activities, remembering little details and always standing ready");
		printf("\nto talk things out with warmth and sensitivity. If things aren't going right, or there's tension in the room, Consuls pick up on it");
		printf("\nand to try to restore harmony and stability to the group.");
		break;
	}

}
void printExplorer_types(PTYPE type) {
	switch (type) {
	case VIRTUOSO:
		printf("\nA Virtuoso (ISTP) is someone with the Introverted, Observant, Thinking, and Prospecting personality traits.");
		printf("\nThey tend to have an individualistic mindset, pursuing goals without needing much external connection.");
		printf("\nThey engage in life with inquisitiveness and personal skill, varying their approach as needed.");
		
		printf("\n\nVirtuosos love to explore with their hands and their eyes, touching and examining the world around");
		printf("\nthem with cool rationalism and spirited curiosity. People with this personality type are natural Makers,");
		printf("\nmoving from project to project, building the useful and the superfluous for the fun of it, and learning");
		printf("\nfrom their environment as they go. Virtuosos find no greater joy than in getting their hands dirty pulling");
		printf("\nthings apart and putting them back together, just a little bit better than they were before.");

		printf("\n\nVirtuosos' decisions stem from a sense of practical realism, and at their heart is a strong sense of direct fairness,");
		printf("\na \"do unto others\" attitude, which really helps to explain many of Virtuosos' puzzling traits. Instead of being overly");
		printf("\ncautious though, avoiding stepping on toes in order to avoid having their toes stepped on, Virtuosos are likely to go too");
		printf("\nfar, accepting likewise retaliation, good or bad, as fair play.");
		break;
	case ADVENTURER:
		printf("\nAn Adventurer (ISFP) is a person with the Introverted, Observant, Feeling, and Prospecting personality traits.");
		printf("\nThey tend to have open minds, approaching life, new experiences, and people with grounded warmth. Their ability ");
		printf("\nto stay in the moment helps them uncover exciting potentials.");

		printf("\n\nAdventurer personalities are true artists, but not necessarily in the typical sense where they're out painting happy little trees.");
		printf("\nOften enough though, they are perfectly capable of this. Rather, it's that they use aesthetics, design and even their choices and ");
		printf("\nactions to push the limits of social convention. Adventurers enjoy upsetting traditional expectations with experiments in beauty and ");
		printf("\nbehavior. ");

		printf("\n\nAdventurers live in a colorful, sensual world, inspired by connections with people and ideas. These personalities take joy");
		printf("\nin reinterpreting these connections, reinventing and experimenting with both themselves and new perspectives. No other type");
		printf("\nexplores and experiments in this way more. This creates a sense of spontaneity, making Adventurers seem unpredictable, even");
		printf("\nto their close friends and loved ones. Adventurers live to find ways to push their passions. Riskier behaviors like gambling");
		printf("\nand extreme sports are more common with this personality type than with others. Adventurers also enjoy connecting with others,");
		printf("\nand have a certain irresistible charm.");
		break;
	case ENTREPRENEUR:
		printf("\nAn Entrepreneur (ESTP) is someone with the Extraverted, Observant, Thinking, and Prospecting personality traits. ");
		printf("\nThey tend to be energetic and action-oriented, deftly navigating whatever is in front of them. They love uncovering");
		printf("\nlife's opportunities, whether socializing with others or in more personal pursuits.");

		printf("\n\nEntrepreneurs always have an impact on their immediate surroundings. Entrepreneur personalities love to be the center of attention.");
		printf("\nIf an audience member is asked to come on stage, Entrepreneurs volunteer – or volunteer a shy friend. Entrepreneurs are the likeliest");
		printf("\npersonality type to make a lifestyle of risky behavior. They live in the moment and dive into the action. Perhaps they also have the");
		printf("\nmost perceptive, unfiltered view of any type, Entrepreneurs have a unique skill in noticing small changes.");

		printf("\n\nEntrepreneurs are full of passion and energy, complemented by a rational, if sometimes distracted, mind.");
		printf("\nInspiring, convincing and colorful, they are natural group leaders, pulling everyone along the path less traveled,");
		printf("\nbringing life and excitement everywhere they go. Putting these qualities to a constructive and rewarding end is");
		printf("\nEntrepreneurs' true challenge.");
		break;
	case ENTERTAINER:
		printf("\nAn Entertainer (ESFP) is a person with the Extraverted, Observant, Feeling, and Prospecting personality traits.");
		printf("\nThese people love vibrant experiences, engaging in life eagerly and taking pleasure in discovering the unknown.");
		printf("\nThey can be very social, often encouraging others into shared activities.");

		printf("\n\nEntertainers get caught up in the excitement of the moment, and want everyone else to feel that way, too.");
		printf("\nNo other personality type is as generous with their time and energy as Entertainers when it comes to encouraging");
		printf("\nothers, and no other personality type does it with such irresistible style. Entertainers love the spotlight,");
		printf("\nand all the world's a stage. Many famous people with the Entertainer personality type are indeed actors.");
		printf("\nUtterly social, Entertainers enjoy the simplest things, and there's no greater joy for them than just having \nfun with a good group of friends.");

		printf("\n\nEntertainers recognize value and quality, which on its own is a fine trait. In combination with their tendency");
		printf("\nto be poor planners though, this can cause them to live beyond their means, and credit cards are especially dangerous.");
		printf("\nMore focused on leaping at opportunities than in planning out long-term goals, Entertainers may find that their");
		printf("\ninattentiveness has made some activities unaffordable. ");
		printf("\nEntertainers are welcome wherever there's a need for laughter, playfulness, and a volunteer to try something new and fun.");
		printf("\nEntertainers can chat for hours, sometimes about anything but the topic they meant to talk about. If they can just remember to ");
		printf("\nkeep their ducks in a row, they'll always be ready to dive into all the new and exciting things the world has to offer, friends in tow.");
		break;
	}
}

void printAll_types(PTYPE type) {
	switch (type){
		
	case ARCHITECT: case LOGICIAN: case COMMANDER: case DEBATOR:
		printAnalyst_types(type);
		break;
	case ADVOCATE: case MEDIATOR: case PROTAGONIST: case CAMPAIGNER:
		printDiplomat_types(type);
		break;
	case LOGISTICIAN: case DEFENDER: case EXECUTIVE: case CONSUL:
		printSentinel_types(type);
		break;
	case VIRTUOSO: case ADVENTURER: case ENTREPRENEUR: case ENTERTAINER:
		printExplorer_types(type);
		break;

	}
}

void printAll_Roles(ROLE role) {
	switch (role){
	case ANALYST:
		printAnalyst();
		break;
	case DIPLOMATS:
		printDiplomats();
		break;
	case SENTINELS:
		printSentinels();
		break;
	case EXPLORERS:
		printExplorers();
		break;
	default:
		break;
	}
}

void printRules_Info(uInfo* user) {
	printf("\nThese are the rules on how the personality type is predicted.");
	printf("\nWe have 8 indicators to what we base the personalties with, which are:");
	printf("\n1.) Mind:\t Extraverted and Introverted");
	printf("\n2.) Energy:\t Intuitive and Sensing");
	printf("\n3.) Nature:\t Thinking and Feeling");
	printf("\n4.) Tactics:\t Judging and Perceiving");
	printf("\n\nThen we evaluate the type of each group of which point is highest. Ex: \"INTJ\" known as ARCHITECT type");
	printf("\nIn case if the types in a group have same points there are default values corresponfing to them.");
	printf("\n> Between E and I, select I");
	printf("\n> Beterrn S and N, select N");
	printf("\n> Between T and F, if male select T, if female selct F");
	printf("\n> Between J and P, select P");
	printf("\n--------------------------------------------");
	printf("\nIn your case you have:");
	printf("\nExtraverted: %4d|Introverted: %4d", user->extraverted, user->introverted);
	printf("\nIntuitive: %4d|Sensing: %4d", user->intuitive, user->sensing);
	printf("\nThinking: %4d|Feeling: %4d", user->thinking, user->feeling);
	printf("\nJudging: %4d|Perceiving: %4d", user->judging, user->perceiving);

}

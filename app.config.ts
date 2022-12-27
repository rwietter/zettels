export default defineAppConfig({
  docus: {
    title: 'Maurício Witter',
    description: 'My Zettelkasten Instance',
    image: 'https://user-images.githubusercontent.com/904724/185365452-87b7ca7b-6030-4813-a2db-5e65c785bf88.png',
    socials: {
      twitter: 'rwietter',
      github: 'rwietter',
    },
    aside: {
      level: 0,
    },
    header: {
      logo: true,
      title:'Maurício Witter',
      showLinkIcon: true,
      exclude: []
    },
    footer: {
      iconLinks: [
        {
          href: 'https://te.me/rwietter',
          icon: 'ic:baseline-telegram'
        }
      ]
    }
  }
})
